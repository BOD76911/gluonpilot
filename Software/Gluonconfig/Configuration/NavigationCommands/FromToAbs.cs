﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Communication.Frames.Incoming;

namespace Configuration.NavigationCommands
{
    public partial class FromToAbs : UserControl, INavigationCommandViewer
    {
        private NavigationInstruction ni;

        public FromToAbs(NavigationInstruction ni)
        {
            InitializeComponent();
            SetNavigationInstruction(ni);
        }

        #region INavigationCommandViewer Members

        public NavigationInstruction GetNavigationInstruction()
        {
            ni = new NavigationInstruction(ni);
            ni.x = _ce.GetLatitudeRad();
            ni.y = _ce.GetLongitudeRad();
            ni.a = (int)_dtb_height.DistanceM;
            ni.opcode = NavigationInstruction.navigation_command.FROM_TO_ABS;
            return ni;
        }

        public void SetNavigationInstruction(NavigationInstruction ni)
        {
            this.ni = new NavigationInstruction(ni);
            _dtb_height.DistanceM = ni.a;
            _ce.SetCoordinateRad(ni.x, ni.y);
        }

        #endregion
    }
}
