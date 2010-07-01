static const tw_optdef clock_opts [] =
{
	TWOPT_GROUP("ROSS Timing"),
	TWOPT_STIME("clock-rate", g_tw_clock_rate, "CPU Clock Rate"),
	TWOPT_END()
};





tw_clock tw_clock_read(void)
{
	tw_clock result;

	return result;	
}


const tw_optdef *tw_clock_setup(void)
{
	return clock_opts;
}

void tw_clock_init(tw_pe * me)
{
	me->clock_time = 0;
	me->clock_offset = tw_clock_read();
}

tw_clock tw_clock_now(tw_pe * me)
{
	me->clock_time = tw_clock_read() - me->clock_offset;
	return me->clock_time;
}